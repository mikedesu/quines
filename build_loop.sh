start_file=$1;

while true; do 
    clear; 
    ./a.out > $start_file.b.c; 
    cat $start_file.b.c; 
    gcc $start_file.b.c 1>/dev/null 2>/dev/null; 
    sleep 1; 
done

