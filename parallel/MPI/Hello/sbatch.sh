#!/bin/bash
#SBATCH -p med
#SBATCH -N 4
#SBATCH -n 4
#SBATCH --mem-per-cpu 2000
#SBATCH -t 10:00:00
#SBATCH -o log/slurm.%N.%j.out
#SBATCH -e log/slurm.%N.%j.err

srun -n 4 ./Hello

