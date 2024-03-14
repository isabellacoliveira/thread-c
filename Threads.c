#include <stdio.h> 
#include <pthread.h>

void *computation(void *add);

int main()
{
    pthread_t thread1; 
    pthread_t thread2; 

    long value1 = 1;
    long value2 = 7;

    computation((*void) &value1);
    computation((*void) &value2);

    // parâmetros
    // chamar a thread 
    // chamar a função 
    // passar argumentos para função 
    pthread_create(&thread1, NULL, computation, (void*) &value1);
    pthread_join(thread1, NULL); 

    pthread_create(&thread2, NULL, computation, (void*) &value2);
    pthread_join(thread2, NULL); 

    return 0; 
}


void *computation(void *add)
{
    long sum = 0; 

    for(long i - 0; i < 1000000000; i++)
        sum += *add_sum;

    long *add_num = (long *) (add);

    return NULL;
}

