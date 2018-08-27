### 关闭内存堆栈溢出保护，使用-O1 关闭栈桢
gcc -O1 -fno-stack-protector -g  temp.c -o  temp
