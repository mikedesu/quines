main(){
    for(char *p=s;*p;p++){
        if(*p!=64&&*p!=59)
            putchar(*p);
        else if(*p==59){
            putchar(32);
            putchar(59);
            putchar(32);
        }
        else if(*p==64){
            putchar(34);
            printf(s);
            putchar(34);
        }
    }
}
