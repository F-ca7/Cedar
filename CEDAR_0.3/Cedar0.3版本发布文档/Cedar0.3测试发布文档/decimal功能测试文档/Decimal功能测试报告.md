## 测试概述

Decimal作为一种数据类型，可以在定义时指定整数部份和小数部分的位数，能够保证数据计算更为精确。本测试针对相关模块和可能错误点对Decimal基本功能进行测试。 

## 实验环境

- 单集群：在一台机器上部署rs/ups/cs/ms
- 三集群：在三台机器上分别部署rs/ups/cs/ms


## 实验测试案例说明

A.     精度支持范围问题：attr_name decimal(p, s)，其中p为总位数，s为小数部分位数，p的最大值为38，s的最大值为37；

B.     算术运算的精度正确性问题，涉及的运算符有：+、-、*、/、%(MOD)；

C.     decimal类型数据与其他类型数据作算术运算的转化规则，需要注意的是：数据类型的转化和精度问题；

D.    decimal的溢出机制；

E.     计算项中包含直接数和不包含直接数，以及各种sql语句：select（distinct）、insert、update、replace等；

F.      聚合函数的支持；

G.    系统函数的支持；

H.    针对主键的支持以及针对自增功能的支持；

I.       decimal针对二级索引的支持；

J.       各种join的支持；

K.     group by，order by的支持；

L.      各种集合运算的支持：union、except、intersect；

M.  每日合并下decimal数据类型的正确性；

N.    jdbc接口针对decimal的支持。

O.    decimal针对特殊格式的支持。

## 实验结果

Decimal共发现30个bug，现已全部解决。

 

 