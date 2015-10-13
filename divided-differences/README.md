# INPUT

```
m (int)
x[i] i =0->m (double)
y[i] i = 0->m (double)
```

# OUTPUT

```
d(k, i), k = 1->m (i = 0, m - k)
i = 0;
```

# Steps
1. Read

   ```
   m, x, y
   i = 0->m
     d[0,i] = y[i];
   k = 1->m
     i = 0->m-k
       d[k,i] = (1 / (x[i + k] - x[i]))(d[k-1, i+1] - d[k-1, i])
   ```

2. Display `d[k, i] (k = 1->m, i = 0->m-k)`

