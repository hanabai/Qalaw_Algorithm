# 1.Qalaw_Algorithm
这是用于学习算法和相关知识的项目。

学习资料来源：

- 趣学算法-陈小玉
- C++ Primer-c++11经典著作
- STL 源码剖析-侯捷
- internet

变成工具：

- ​	Qt 5

# 2.GitAlgorithm说明

这是我根据《趣学算法》学习的关于算法的内容。

对每一节的内容单独新建c++ class 文件，既.h和.cpp文件。

## 学习步骤

- 根据题目说明和自己的经验，先进行自主解答。运行成功并且答案正确的情况下再根据书中的思路进行改正。
- 对于算法解析以及优化拓展进行思考与解答。
- 对于书中涉及到的知识点要在完成算法题目之后的第一时间进行系统的学习。
- 对于自己写的代码要清楚每个部分的作用，并且在写代码的过程中进行注释说明。

# 3.项目目录结构设置

- 每一章节设立一个.pri文件。
- pri文件的设置步骤
  - 在项目目录下新建一个文件夹。
  - 进入该文件夹新建.pri文件。文件名称设置为“章节序号_章节名称”。例如第二章是贪心算法，则命名为：Chapter2_GreedyAlgorithm。
  - 在每一章节的文件夹下的README.md中说明每一章节的知识点。
- 命名规则：
  - 所有的类名、变量名以驼峰方式命名。
  - 对于类中的属性以变量类型的第一个字母作为开头，属性命名要根据其用途进行驼峰命名。
  - 形参变量全部小写。

# 4.Map的系统学习

1. 链接

   https://cloud.tencent.com/developer/article/1010477

2. 关联容器

   1. set:<key>;用于高效查询；

      | set                | key            | 用于     | 头文件          |
      | :----------------- | -------------- | -------- | --------------- |
      | set                | 有序且不可重复 | 高效查询 | set.h           |
      | multiset           | 可重复         |          | set.h           |
      | unordered_set      | 无序           | 哈希函数 | unordered_set.h |
      | unordered_multiset | 无序且可重复   | 哈希函数 | unordered_set.h |

      

   2. map:<key,value>;关键字key用于索引，值value是与索引相关联的数据；

      | map                | key            | 用于     | 头文件          |
      | ------------------ | -------------- | -------- | --------------- |
      | map                | 有序且不可重复 | 映射     | map.h           |
      | multimap           | 可重复         |          | map.h           |
      | unordered_map      | 无序           | 哈希函数 | unordered_map.h |
      | unordered_multimap | 无序且可重复   | 哈希函数 | unordered_map.h |




## 4.1学习模板与泛型编程

1. 因为map的源代码是通过模板函数的形式编写的，所以需要学习模板函数与泛型编程的相关知识点。

# 5.c++调用本地应用程序

1. 左边一个文本框，点击之后可以选取本地的文件。
2. 右边的下拉列表可以根据文件后缀名，选取列出本地可以打开该类型文件的应用程序。
3. 根据鼠标点击的应用程序名称，查找应用程序的路径。
4. 通过cmd等方式进入的该路径，并打开应用程序。



# 6.Learn_Char

## 6.1main函数

链接：https://www.cnblogs.com/avril/archive/2010/03/22/1691477.html

1. **int  argc** 
     这个东东用来表示你在命令行下输入命令的时候，一共有多少个参数。比方说你的程序编译后，可执行文件是test.exe 
     D:\tc2>test 
     这个时候，argc的值是1 
     但是 
     D:\tc2>test.exe  myarg1  myarg2 
     的话，argc的值是3。也就是  命令名  加上两个参数，一共三个参数 

2. **char  \*argv[]** 
     这个东东用来取得你所输入的参数 
     D:\tc2>test 
     这个时候，argc的值是1，argv[0]的值是  "test" 
     D:\tc2>test myarg1 myarg2 
     这个时候，argc的值是3，argc[0]的值是"test"，argc[1]的值是"myarg1"，argc[2]的值是"myarg2"。 
     这个东东一般用来为程序提供非常重要的信息，如：数据文件名，等等。 
     如：copy a.c b.txt 
     这个时候，a.c和b.txt就是所谓的“非常重要的信息”。不指定这两个文件，你没法进行拷贝。 
     当你的程序用到argc和argv这两个参数的时候，可以简单地通过判断argc的值，来看看程序的参数是否符合要求 

3. **char  \*envp[]** 
     这个东东相对来说用得比较少。它是用来取得系统的环境变量的。 
     如：在DOS下，有一个PATH变量。当你在DOS提示符下输入一个命令（当然，这个命令不是dir一类的内部命令）的时候，DOS会首先在当前目录下找这个命令的执行文件。

     如果找不到，则到PATH定义的路径下去找，找到则执行，找不到返回Bad command or file name 
     在DOS命令提示符下键入set可查看系统的环境变量 
     同样，在UNIX或者LINUX下，也有系统环境变量，而且用得比DOS要多。如常用的$PATH,$USER,$HOME等等。 
     envp保存所有的环境变量。其格式为（UNIX下） 
     PATH=/usr/bin;/local/bin; 
     HOME=/home/shuui 
     即： 
     环境变量名=值 
     DOS下大概也一样。 
     环境变量一般用来为程序提供附加信息。比如，你做了一个显示文本的内容的程序。你想控制其一行中显示的字符的个数。你可以自己定义一个环境变量（UNIX下） 
     %setenv  NUMBER  =  10 
     %echo  $NUMBER 
     10 
     然后你可以在程序中读入这个环境变量。然后根据其值决定一行输出多少个字符。这样，如果你不修改环境变量的话，你每次执行这个程序，一行中显示的字符数都是不一样的 

## 6.2字符串的学习

https://chenyu.blog.csdn.net/article/details/52588455?utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link

1. <img src="C:\Users\41639\AppData\Roaming\Typora\typora-user-images\image-20211018000229170.png" alt="image-20211018000229170" style="zoom:200%;" />

   
