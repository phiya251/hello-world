#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define N 100
#define producerNum  15
#define consumerNum  5

int buffer[N] = {0},value=0;
void * producer(void * a){
	//code here
}

void * consumer(void *b){
    //code here
}

int main()
{
    //sem_init();
    //code here
    pthread_t threadPool[producerNum+consumerNum];
    int i;
    for(i = 0; i < producerNum; i++){
        pthread_t temp;
        if(pthread_create(&temp, NULL, producer, NULL) == -1){
            printf("ERROR, fail to create producer%d\n", i);
            exit(1);
        }
        threadPool[i] = temp;
    }//创建生产者进程放入线程池

    //创建消费者进程放入线程池i
	//code here!!

    void * result;
    for(i = 0; i < producerNum+consumerNum; i++){
        if(pthread_join(threadPool[i], &result) == -1){
            printf("fail to recollect\n");
            exit(1);
        }
    }//运行线程池
    return 0;
}
