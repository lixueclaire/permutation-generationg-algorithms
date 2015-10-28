permutation-generationg-algorithms 
=========================================
different algorithms for generating permutions 
 
* permutation.cpp       ——基于交换的递归方法生成全排列
* permutation_list.cpp  ——基于链表的递归方法生成全排列
* permutation_stl.cpp   ——调用STL中的库函数生成全排列
* permutation_dict.cpp  ——字典序法生成全排列
* permutation_add.cpp   ——递增进位制数法生成全排列
* permutation_dec.cpp   ——递减进位制数法生成全排列
* permutation_swap.cpp  ——邻位对换法生成全排列
        
### result
(2.5Ghz Intel Core i5, 8GB 1600Mhz DDR3) when N = 10 <br/>

* permutation.cpp       171ms
* permutation_list.cpp  56ms
* permutation_stl.cpp   84ms
* permutation_dict.cpp  947ms
* permutation_add.cpp   1254ms
* permutation_dec.cpp   1481ms
* permutation_swap.cpp  138ms
