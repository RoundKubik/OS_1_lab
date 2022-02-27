#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* thread (void* args){
    int number = *(int*)args;
    int liveCount = 0;
    
	while(1){
		if(liveCount == 0){
            printf("\n THREAD № %i: start\n", number);
            liveCount++;
        }
        else{
            printf("\n THREAD № %i: alive %i seconds\n", number, liveCount++);
        }
        sleep(5);
    }
    return 0;
}

int main(void){
	const int THREAD_COUNT = 4;
    int args[THREAD_COUNT];
    pthread_t threads[THREAD_COUNT];
    
	for(int i = 0; i < THREAD_COUNT; i++){
        args[i] = i;
        pthread_create(&threads[i], NULL, thread, &args[i]);
    }
    pthread_join(threads[0], NULL);
}
