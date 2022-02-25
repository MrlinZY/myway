# C语言查缺补漏

## sizeof:

```c
sizeof(arr)/sizeof(arr[0])
```

## const:

```c
const int *p//const在*的左边。所以*p不能被改，但p可以被改
int* const p//const在*的右边。修饰的是p，p不能被改，但*p可以
const int* const p//都不能改
```

**位运算符**

