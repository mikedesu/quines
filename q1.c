main(){
    for(char *p=s;*p;p++) {
        if(*p!=64) 
            putchar(*p);
        else if(*p==64){
            putchar(34);
            printf(s);
            putchar(34);
        }
    }
}
