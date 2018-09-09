# #!/bin/bash 
# #作为可执行程序，使用./
# echo "nihao"
# 
# #作为解析器参数，使用/bin/bash
# echo "hello world"
# 
# #解析器的工作原理：代码的替换，文本中的内容当作命令行参数传给解析器
# 
# #解释创建 子进程来解释脚本
# pwd
# cd ..
# pwd

# #shell变量不需要先定义，变量名和等号直接不能使用空格
# intval=10
# #变量的输出
# echo $intval
# 
# #对变量取值的时候，可以使用{}，用来表明变量名的边界
# string="hello"
# #对于下边的输出，只有BAT，由于接下去将stringworld视为一个变量，而这个变量又没有出现过
# echo "$stringworld BAT"
# #可以使用{}，用来表明变量名的边界
# echo "${string}world BAT"
# 
# #注意：只有当变量作为右值时，才可以带上$符号
# 
# readonly mystring="chaiyandong"
# #当执行下面这条命令的时候，会爆出不能修改只读变量的错误
# mystring="chai"
# 

# #使用unset可以删除变量，变量删除后为空
# mystring="chai"
# echo $mystring
# unset mystring
# echo $mystring
# 
# #unset命令不能删除只读变量
# readonly mystr="chaiyandong"
# #执行下面这条命令将会爆出相应的错误
# unset mystr
# 

# #变量类型：本地变量、环境变量、shell变量
# echo $mystr
# #以下命令显示本地shell进程中的全部变量与函数
# set
# 

# #字符串的拼接
# str1="chai "
# str2=yan
# echo $str1$str2' dong'
# 
# #求字符串的长度
# echo ${#str1}
# 
# #提取字符串
# echo ${str1:1:3}
# 
# #查找字符串
# string="chai yan dong"
# echo $string
# echo `expr index '$string' is`
# 
# #文件名替换，用于匹配的字符称为通配符
# 
# #命令替换和算法替换
# date=`date +%Y:%m:%d`
# echo $date
# 
# #(())中shell变量取值将转换成整数，常用与算术计算
# myint=100
# (( myint++ ))
# echo $myint
# 

# #如果将运算结果作为右值需要：
# myint=100
# ret=$(( ++myint ))
# echo $ret
# 
###################################################3
#测试函数
###################################################3

# read myint
# test $myint -eq 100
# echo $?
# [ $myint -eq 100 ]
# echo $?
# 

# #逻辑反
# read mystring
# [ "X$mystring" == "Xmystr" ]
# echo $?
# 
# read mystring
# [ ! "X$mystring" == "Xmystr" ]
# echo $?
# 
# 
# #逻辑与
# read data1
# read data2
# [ $data1 -eq 10 -a $data2 -eq 10 ]
# echo $?
# 

# echo $1
# 
# #for环语句
# 
# for ((i = 0;i<10;++i))
# do
#     echo $i
# done
# 
# 
# for i in {a..z}
# do 
#     echo $i
# done
# 
# #while循环语句
# i=0
# while [ $i -le 5 ]
# do
#     echo $i
#     let i++
# done
# 

# echo $0
# #当前进程的进程号
# echo $$
# #参数列表
# echo $@
# #参数列表数-1
# echo $#

# echo $1
# echo $2
# echo $3
# 
# #一下代码将会提示越界
# shift -1
# echo $1
# echo $2
# echo $3
# 


#函数 和C语言类似，shell中也 有函数，但是函数定义中没有返回值也没有参数列表
function FUN()
{
    echo "chai yan dong"
}

FUN

