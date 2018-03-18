# C-calculation
两个double型数字的加减乘除次方和开方运算。主要是练习C语言的自定义头文件嵌套和相互引用。

## 文件结构

+ as.c 加减
+ as.h
+ md.c 乘除
+ md.h
+ sr.c 次方和开方
+ sr.h
+ cal.c 计算
+ cal.h
+ test.c 测试main 


## gcc编译

```
 gcc -lm -g3 -Wall -o test test.c cal.c as.c md.c sr.c
```

## gdb调试

```
gdb -tui

# 载入test文件
(gdb)file test

# 在13行断点
(gdb)b 13

# 运行代码
(gdb)r

# 单步调试
(gdb)s

```