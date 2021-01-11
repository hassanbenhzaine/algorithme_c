int howOld(int age){
    return age;
}

int tableMultipilcation(int start,int end){
    for(int rep = 1; rep <= 10; rep++){
        printf("%dx%d = %d  | %dx%d = %d\n",start, rep, start*rep, end, rep, end*rep);
    }
    return 1;
}