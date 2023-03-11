main(){
    for(char *p=s;*p;p++){
        *p!=64?
            putchar(*p):
            putchar(34)&&printf(s)&&putchar(34);
    }
}
