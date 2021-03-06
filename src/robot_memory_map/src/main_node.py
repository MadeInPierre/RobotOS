#!/usr/bin/python
import rospy
from loader import MapLoader
from markers_node import MarkersPublisher


class Map():
    def __init__(self):
        self.NODE = rospy.init_node('map', log_level=rospy.DEBUG)
        MapDict = MapLoader().load("Definitions/map_2018.yml")

        markers = MarkersPublisher()
        markers.publishTable(MapDict)

        r = rospy.Rate(30)
        while not rospy.is_shutdown():
            markers.publishObjects(MapDict)
            r.sleep()


if __name__ == "__main__":
    Map()
