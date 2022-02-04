#include <unistd.h>
#include <semaphore.h>
#include <stdio.h>
#include <fcntl.h>
sem_t *mutex;
FILE *fileName;
int N= 0;
int main(){
mutex = sem_open("semaphore", O_CREAT |O_EXCL, 0644, 1);
if(fork() == 0){

  if(fork() == 0){

}

}
sem_wait(mutex);

//DO CS
int count = 0;
while(count <  200){
    
    fscanf(fileName, "%d", &N);
    fclose(fileName);
    printf("wassup");
    N++;
   
    fprintf(fileName, "%d", N);
    fflush(fileName);
    fclose(fileName);
    count++;

}
sem_post(mutex);
return 0;
}