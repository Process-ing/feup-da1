## Objectives of the Project

The main objective of this project is to develop a water supply management tool, that can:

- Read and parse dataset files, to build the network graph.
- Calculate the maximum flow that can be passed from all reservoirs to all delivery sites (cities) or a specific delivery site.
- Check if the maximum flow meets the demand of all the cities.
- Balance the load across the network, using a heuristic algorithm that minimizes the mean value of the residual capacity of the pipes.
- Evaluate if the removal of a reservoir, pumping station or pipe from the network affects the maximum flow that can reach each city.
- Determine what pipes will affect the supply to a specific city, if removed.

## Instructions to Run

1. Clone the repository
2. Run the following commands on the terminal:
    ```
    cd feup-da1                    # Open project
    mkdir build && cd build        # Create and open build directory
    cmake .. && cmake --build .    # Build project
    ./feup-da1                     # Run project
    ```

If the project is being run in the CLion terminal, make sure the option "Emulate terminal in output console" is enabled
in the Run/Debug configurations. This is necessary for capturing inputs for our program.

## Using Custom Datasets

Custom Datasets can be used in the project. To use them follow these instructions:
1. Put the files in a folder named "dataset" in the main project directory according to the following rules:
    - The **Reservoir** file should be named "Reservoir.csv" 
    - The **Stations** file should be named "Stations.csv" 
    - The **Cities** file should be named "Cities.csv" 
    - The **Pipes** file should be named "Pipes.csv"
    - The overall structure of the CSV files should be the same as the ones in the other dataset
2. When starting the program, select the option ```[3]``` in the menu to load a custom dataset

The structure should be like:
```
$ tree dataset/

  dataset
    ├── Cities.csv
    ├── Pipes.csv
    ├── Reservoir.csv
    └── Stations.csv
```

## Tips and Tricks (for anyone doing a similar project)

- Try to think about the algorithms before starting to develop the code. This will give a clearer understanding of what you will and will not need and define a structure that better suits the project.
- We tried to use an implementation of the Edmonds-Karp that follows the requirements of the one done in the practical lessons, that preserves the edges, which gave some difficulties with the bidirectional pipes. One suggestion I make is to create a reverse edge, for each pipe, in either case, setting the capacity of this edge to 0 if the original edge is directed. This should yield a simpler handling of bidirectional pipes.

## Contributors and Results

- [Bruno Oliveira](https://github.com/Process-ing)
- [Rodrigo Coelho](https://github.com/racoelhosilva)
- [Vítor Pires](https://github.com/vitormpp)

Final Grade: 20.0/20
