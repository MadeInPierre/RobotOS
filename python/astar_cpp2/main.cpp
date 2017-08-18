#include <iostream>

#include "AStar.hpp"
#include <chrono>

extern "C" {
	// weights:        flattened h*w grid of costs
	// start, goal:    index of start/goal in flattened grid
	// paths (output): for each node, stores previous node in path
	bool astar(const float* weights, const int height, const int width,
			   const int start, const int goal,
			   int* paths) 
	{
		auto start_time = std::chrono::high_resolution_clock::now();

			AStar::Generator generator;
			generator.setWorldSize({height, width});
			generator.setHeuristic(AStar::Heuristic::manhattan);
			generator.setDiagonalMovement(true);
			
			for (int i = 0; i < height * width; ++i)
			{
				if(weights[i] == 0) {
					generator.addCollision({(int)(i / width), i % width});
				}
			}
				
			//std::cout << "Generate path ... \n";
			//std::cout << "Starting at coord : " << (int)(start / width) << "," << start % width << "(" << generator.detectCollision({(int)(start / width), start % width}) << " at pos)\n";
			auto path = generator.findPath( {(int)(start / width), start % width}, 
											{(int)(goal  / width), goal % width});
			


		auto current_time = std::chrono::high_resolution_clock::now();
		std::cout << "C++ pathfinding took " << std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() << "ms." << std::endl;

			if(path.size() == 0)
				return false;

			int i = 0;
			for(auto& coordinate : path) {
				//std::cout << "(" << coordinate.x << "," << coordinate.y << ", " << coordinate.x * width + coordinate.y << ") ";
				paths[i] = coordinate.x * width + coordinate.y;
				i++;
			}


		current_time = std::chrono::high_resolution_clock::now();
		std::cout << "C++ TOTAL ran for " << std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() << "ms." << std::endl;
		return true;
	}
}