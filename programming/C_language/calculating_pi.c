// implement by threads
// Monte Carlo technique for calculating pi

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define total_number_of_points 1000000
#define number_of_threads 10


int points_in_circle = 0;
void *runner(void *param);
double random_number();

int main()
{
	int points_per_thread = total_number_of_points/ number_of_threads;
	int i;
	double Pi;
	
	pthread_t workers[number_of_threads];
	srand(time(NULL));
	
	for (i=0; i < number_of_threads; i++)
	{
		pthread_create(&workers[i], 0, runner, &points_per_thread);
	}
	
	for (i=0; i < number_of_threads; i++) pthread_join(workers[i], NULL);
	
	Pi = 4.0 * points_in_circle / total_number_of_points;
	printf("Number of points = %d\n", total_number_of_points);
	printf("Number of points in circle= %d\n", points_in_circle);
	printf("Pi = %f\n", Pi);
	
	return 0;
}

void *runner(void *param)
{
	int points;
	points = *((int *) param);
	int i;
	int in_circle = 0;
	double x, y;
	
	for (i=0; i<points; i++)
	{
		x = random_number();
		y = random_number();
		
		if ( sqrt(x*x + y*y) < 1.0) in_circle +=1 ;
		
	}
	points_in_circle += in_circle;

	pthread_exit(0);
}

// generate random numbers between -1.0 and +1.0
double random_number()
{
	
	double max = 1.0;
	double min = -1.0;
	return (max - min) * rand() / (RAND_MAX + 1.0) + min;
}
