#week04-4 99乘法表 python版
for i in range(1,10):
  for j in range(1,10):
    print(f'{j}x{i}={i*j:2} ',end='')
  print()