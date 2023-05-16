#include "read.h"

#include <mpi.h>
#include <stdio.h>

#define N 1000000

int world_size = 0;
int world_rank = 0;

double input[N] = { 0.0 };

MPI_Status status;

int main()
{
    MPI_Init(NULL, NULL);

    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    read_input("./input.txt", &input[0], N);

    // Implementation

    MPI_Finalize();

    return 0;
}