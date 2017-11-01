**PAT**
===============
团体程序设计天梯赛GPLT(C/C++/Java)题解<br>
这个是上年准备升上大二的时候做的题目，所以不要以为我什么都会哦 :blush:<br>

**目录**
---------
|-------------------------------||-------------------------------||-------------------------------||-------------------------------|
|* [L1-001](#l1-001-hello-world)||* [L1-002](#l1-002-打印沙漏)||* [L1-003](#l1-003-个位数统计)||* [L1-004](#l1-004-计算摄氏温度)|
|* [L1-005](#l1-005-考试座位号)||* [L1-006](#l1-006-连续因子)||* [L1-007](#l1-007-念数字)||* [L1-008](#l1-008-求整数段和)|
|* [L1-009](#l1-009-n个数求和)||* [L1-010](#l1-010-比较大小)||* [L1-011](#l1-011-a-b)||* [L1-012](#l1-012-计算指数)|
|* [L1-013](#l1-013-计算阶乘和)||* [L1-014](#l1-014-简单题)||* [L1-015](#l1-015-跟奥巴马一起画方块)||* [L1-016](#l1-016-查验身份证)|
|* [L1-017](#l1-017-到底有多二)||* [L1-018](#l1-018-大笨钟)||* [L1-019](#l1-019-谁先倒)||* [L1-020](#l1-020-帅到没朋友)|
|-------------------------------||-------------------------------||-------------------------------||-------------------------------|
# L1-001. Hello World

这道超级简单的题目没有任何输入。<br>
你只需要在一行中输出著名短句“Hello World!”就可以了。<br>

[L1-001](./L1题/L1-001.c "点击查看答案") <br>

[回到顶部](#readme)

# L1-002. 打印沙漏

本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印<br>

    *****
     ***
      *
     ***
    *****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。<br>

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。<br>
输入格式：<br>

输入在一行给出1个正整数N（<=1000）和一个符号，中间以空格分隔。<br>

输出格式：<br>

首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。<br>

输入样例：<br>

19 *<br>

输出样例：<br>

    *****
     ***
      *
     ***
    *****
    2

[L1-002](./L1题/L1-002.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-003. 个位数统计

给定一个k位整数N = dk-110k-1 + ... + d1101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定N = 100311，则有2个0，3个1，和1个3。<br>

输入格式：<br>

每个输入包含1个测试用例，即一个不超过1000位的正整数N。<br>

输出格式：<br>

对N中每一种不同的个位数字，以D:M的格式在一行中输出该位数字D及其在N中出现的次数M。要求按D的升序输出。<br>

输入样例：<br>

100311<br>

输出样例：<br>

0:2<br>
1:3<br>
3:1<br>

[L1-003](./L1题/L1-003.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-004. 计算摄氏温度

给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。计算公式：C = 5*(F-32)/9。题目保证输入与输出均在整型范围内。<br>

输入格式：<br>

输入在一行中给出一个华氏温度。<br>

输出格式：<br>

在一行中按照格式“Celsius = C”输出对应的摄氏温度C的整数值。<br>

输入样例：<br>
150<br>
输出样例：<br>
Celsius = 65<br>
[L1-004](./L1题/L1-004.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-005. 考试座位号

每个PAT考生在参加考试时都会被分配两个座位号，一个是试机座位，一个是考试座位。<br>
正常情况下，考生在入场时先得到试机座位号码，入座进入试机状态后，系统会显示该考生的考试座位号码，考试时考生需要换到考试座位就座。<br>
但有些考生迟到了，试机已经结束，他们只能拿着领到的试机座位号码求助于你，从后台查出他们的考试座位号码。<br>

输入格式：<br>

输入第一行给出一个正整数N（<=1000），随后N行，每行给出一个考生的信息：“准考证号 试机座位号 考试座位号”。<br>
其中准考证号由14位数字组成，座位从1到N编号。输入保证每个人的准考证号都不同，并且任何时候都不会把两个人分配到同一个座位上。<br>

考生信息之后，给出一个正整数M（<=N），随后一行中给出M个待查询的试机座位号码，以空格分隔。<br>

输出格式：<br>

对应每个需要查询的试机座位号码，在一行中输出对应考生的准考证号和考试座位号码，中间用1个空格分隔。<br>

输入样例：<br>
4<br>
10120150912233 2 4<br>
10120150912119 4 1<br>
10120150912126 1 3<br>
10120150912002 3 2<br>
2<br>
3 4<br>
输出样例：<br>
10120150912002 2<br>
10120150912119 1<br>

[L1-005](./L1题/L1-005.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-006. 连续因子

一个正整数N的因子中可能存在若干连续的数字。例如630可以分解为356*7，其中5、6、7就是3个连续的数字。给定任一正整数N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。<br>

输入格式：<br>

输入在一行中给出一个正整数N（1<N<231）。<br>

输出格式：<br>

首先在第1行输出最长连续因子的个数；然后在第2行中按“因子1因子2……*因子k”的格式输出最小的连续因子序列，其中因子按递增顺序输出，1不算在内。<br>

输入样例：<br>
630<br>
输出样例：<br>
3<br>
567<br>
[L1-006](./L1题/L1-006.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-007. 念数字

输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：<br>

    0: ling
    1: yi
    2: er
    3: san
    4: si
    5: wu
    6: liu
    7: qi
    8: ba
    9: jiu
输入格式：<br>

输入在一行中给出一个整数，如： 1234 。<br>

提示：整数包括负数、零和正数。<br>

输出格式：<br>

在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。<br>

输入样例：<br>
-600<br>
输出样例：<br>
fu liu ling ling<br>
[L1-007](./L1题/L1-007.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-008. 求整数段和

给定两个整数A和B，输出从A到B的所有整数以及这些数的和。<br>

输入格式：<br>

输入在一行中给出2个整数A和B，其中-100<=A<=B<=100，其间以空格分隔。<br>

输出格式：<br>

首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中输出全部数字的和。<br>

输入样例：<br>
-3 8<br>
输出样例：
-3   -2   -1    0    1<br>
 2    3    4    5    6<br>
 7    8<br>
Sum = 30<br>
[L1-008](./L1题/L1-008.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-009. N个数求和

本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数“分子/分母”的形式给出的，你输出的和也必须是有理数的形式。<br>

输入格式：<br>

输入第一行给出一个正整数N（<=100）。随后一行按格式“a1/b1 a2/b2 ...”给出N个有理数。题目保证所有分子和分母都在长整型范围内。<br>
另外，负数的符号一定出现在分子前面。<br>

输出格式：<br>

输出上述数字和的最简形式 —— 即将结果写成“整数部分 分数部分”，其中分数部分写成“分子/分母”，要求分子小于分母，且它们没有公因子。<br>
如果结果的整数部分为0，则只输出分数部分。<br>

输入样例1：<br>
5<br>
2/5 4/15 1/30 -2/60 8/3<br>
输出样例1：<br>
3 1/3<br>
输入样例2：<br>
2<br>
4/3 2/3<br>
输出样例2：<br>
2<br>
输入样例3：<br>
3<br>
1/3 -1/6 1/8<br>
输出样例3：<br>
7/24<br>
[L1-009](./L1题/L1-009.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-010. 比较大小

本题要求将输入的任意3个整数从小到大输出。<br>

输入格式：<br>

输入在一行中给出3个整数，其间以空格分隔。<br>

输出格式：<br>

在一行中将3个整数从小到大输出，其间以“->”相连。<br>

输入样例：<br>
4 2 8<br>
输出样例：<br>
2->4->8<br>
[L1-010](./L1题/L1-010.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-011. A-B

本题要求你计算A-B。不过麻烦的是，A和B都是字符串 —— 即从字符串A中把字符串B所包含的字符全删掉，剩下的字符组成的就是字符串A-B。<br>

输入格式：<br>

输入在2行中先后给出字符串A和B。两字符串的长度都不超过104，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。<br>

输出格式：<br>

在一行中打印出A-B的结果字符串。<br>

输入样例：<br>
I love GPLT! It's a fun game!<br>
aeiou<br>
输出样例：<br>
I lv GPLT! It's fn gm!<br>
[L1-011](./L1题/L1-011.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-012. 计算指数

真的没骗你，这道才是简单题 —— 对任意给定的不超过10的正整数n，要求你输出2n。不难吧？<br>

输入格式：<br>

输入在一行中给出一个不超过10的正整数n。<br>

输出格式：<br>

在一行中按照格式“2^n = 计算结果”输出2n的值。<br>

输入样例：<br>
5<br>
输出样例：<br>
2^5 = 32<br>
[L1-012](./L1题/L1-012.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-013. 计算阶乘和

对于给定的正整数N，需要你计算 S = 1! + 2! + 3! + ... + N!。<br>

输入格式：<br>

输入在一行中给出一个不超过10的正整数N。<br>

输出格式：<br>

在一行中输出S的值。<br>

输入样例：<br>
3<br>
输出样例：<br>
9<br>
[L1-013](./L1题/L1-013.c "点击查看答案") <br>
[回到顶部](#readme)

# L1-014. 简单题
这次真的没骗你 —— 这道超级简单的题目没有任何输入。<br>

你只需要在一行中输出事实：“This is a simple problem.”就可以了。<br>
[L1-014](./L1题/L1-014.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-015. 跟奥巴马一起画方块
美国总统奥巴马不仅呼吁所有人都学习编程，甚至以身作则编写代码，成为美国历史上首位编写计算机代码的总统。<br>
2014年底，为庆祝“计算机科学教育周”正式启动，奥巴马编写了很简单的计算机代码：在屏幕上画一个正方形。现在你也跟他一起画吧！<br>

输入格式：<br>

输入在一行中给出正方形边长N（3<=N<=21）和组成正方形边的某种字符C，间隔一个空格。<br>

输出格式：<br>

输出由给定字符C画出的正方形。但是注意到行间距比列间距大，所以为了让结果看上去更像正方形，我们输出的行数实际上是列数的50%（四舍五入取整）。<br>

输入样例：<br>
10 a<br>
输出样例：<br>
aaaaaaaaaa<br>
aaaaaaaaaa<br>
aaaaaaaaaa<br>
aaaaaaaaaa<br>
aaaaaaaaaa<br>
[L1-015](./L1题/L1-015.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-016. 查验身份证
一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：<br>

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；<br>
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：<br>

Z：0 1 2 3 4 5 6 7 8 9 10<br>
M：1 0 X 9 8 7 6 5 4 3 2<br>

现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。<br>

输入格式：<br>

输入第一行给出正整数N（<= 100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。<br>

输出格式：<br>

按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。<br>
如果所有号码都正常，则输出“All passed”。<br>

输入样例1：<br>
4<br>
320124198808240056<br>
12010X198901011234<br>
110108196711301866<br>
37070419881216001X<br>
输出样例1：<br>
12010X198901011234<br>
110108196711301866<br>
37070419881216001X<br>
输入样例2：<br>
2<br>
320124198808240056<br>
110108196711301862<br>
输出样例2：<br>
All passed<br>
[L1-016](./L1题/L1-016.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-017. 到底有多二
一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；<br>
如果还是个偶数，则再增加1倍。例如数字“-13142223336”是个11位数，其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：3/11*1.5*2*100%，约为81.82%。本题就请你计算一个给定整数到底有多二。<br>

输入格式：<br>

输入第一行给出一个不超过50位的整数N。<br>

输出格式：<br>

在一行中输出N犯二的程度，保留小数点后两位。<br>

输入样例：<br>
-13142223336<br>
输出样例：<br>
81.82%<br>
[L1-017](./L1题/L1-017.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-018. 大笨钟
微博上有个自称“大笨钟V”的家伙，每天敲钟催促码农们爱惜身体早点睡觉。不过由于笨钟自己作息也不是很规律，所以敲钟并不定时。<br>一般敲钟的点数是根据敲钟时间而定的，如果正好在某个整点敲，那么“当”数就等于那个整点数；如果过了整点，就敲下一个整点数。<br>另外，虽然一天有24小时，钟却是只在后半天敲1~12下。例如在23:00敲钟，就是“当当当当当当当当当当当”，而到了23:01就会是“当当当当当当当当当当当当”。<br>在午夜00:00到中午12:00期间（端点时间包括在内），笨钟是不敲的。<br>

下面就请你写个程序，根据当前时间替大笨钟敲钟。<br>

输入格式：<br>

输入第一行按照“hh:mm”的格式给出当前时间。其中hh是小时，在00到23之间；mm是分钟，在00到59之间。<br>

输出格式：<br>

根据当前时间替大笨钟敲钟，即在一行中输出相应数量个“Dang”。如果不是敲钟期，则输出：<br>

Only hh:mm.  Too early to Dang.<br>
其中“hh:mm”是输入的时间。<br>

输入样例1：<br>
19:05<br>
输出样例1：<br>
DangDangDangDangDangDangDangDang<br>
输入样例2：<br>
07:05<br>
输出样例2：<br>
Only 07:05.  Too early to Dang.<br>
[L1-018](./L1题/L1-018.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-019. 谁先倒
划拳是古老中国酒文化的一个有趣的组成部分。酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。如果谁比划出的数字正好等于两人喊出的数字之和，谁就输了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。<br>

下面给出甲、乙两人的酒量（最多能喝多少杯不倒）和划拳记录，请你判断两个人谁先倒。<br>

输入格式：<br>

输入第一行先后给出甲、乙两人的酒量（不超过100的非负整数），以空格分隔。下一行给出一个正整数N（<=100），随后N行，每行给出一轮划拳的记录，格式为：<br>

甲喊 甲划 乙喊 乙划<br>

其中“喊”是喊出的数字，“划”是划出的数字，均为不超过100的正整数（两只手一起划）。<br>

输出格式：<br>

在第一行中输出先倒下的那个人：A代表甲，B代表乙。第二行中输出没倒的那个人喝了多少杯。题目保证有一个人倒下。注意程序处理到有人倒下就终止，后面的数据不必处理。<br>

输入样例：<br>
1 1<br>
6<br>
8 10 9 12<br>
5 10 5 10<br>
3 8 5 12<br>
12 18 1 13<br>
4 16 12 15<br>
15 1 1 16<br>
输出样例：<br>
A<br>
1<br>
[L1-019](./L1题/L1-019.c "点击查看答案") <br>
[回到顶部](#readme)
# L1-020. 帅到没朋友
当芸芸众生忙着在朋友圈中发照片的时候，总有一些人因为太帅而没有朋友。本题就要求你找出那些帅到没有朋友的人。<br>

输入格式：<br>

输入第一行给出一个正整数N（<=100），是已知朋友圈的个数；随后N行，每行首先给出一个正整数K（<=1000），为朋友圈中的人数，然后列出一个朋友圈内的所有人——为方便起见，每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；之后给出一个正整数M（<=10000），为待查询的人数；随后一行中列出M个待查询的ID，以空格分隔。<br>

注意：没有朋友的人可以是根本没安装“朋友圈”，也可以是只有自己一个人在朋友圈的人。虽然有个别自恋狂会自己把自己反复加进朋友圈，但题目保证所有K超过1的朋友圈里都至少有2个不同的人。<br>

输出格式：<br>

按输入的顺序输出那些帅到没朋友的人。ID间用1个空格分隔，行的首尾不得有多余空格。如果没有人太帅，则输出“No one is handsome”。<br>

注意：同一个人可以被查询多次，但只输出一次。<br>

输入样例1：<br>
3<br>
3 11111 22222 55555<br>
2 33333 44444<br>
4 55555 66666 99999 77777<br>
8<br>
55555 44444 10000 88888 22222 11111 23333 88888<br>
输出样例1：<br>
10000 88888 23333<br>
输入样例2：<br>
3<br>
3 11111 22222 55555<br>
2 33333 44444<br>
4 55555 66666 99999 77777<br>
4<br>
55555 44444 22222 11111<br>
输出样例2：<br>
No one is handsome<br>
[L1-020](./L1题/L1-020.c "点击查看答案") <br>
[回到顶部](#readme)
