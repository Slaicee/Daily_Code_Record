2025-3-25
第一题
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。
完成了力扣的第一题，虽然完成了但是代码写得一坨，时间复杂度很高，有很大的优化空间
题目要求用malloc（）返回结果，而且* returnSize = 2;忽略了
总体还是用了两个for循环来枚举

第二题求一个回文数
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
例如，121 是回文，而 123 不是。
这是别人写的代码
bool isPalindrome(int x){
    double t=0;
    double n=x;
    if(x<0)
    return false;
    else{
    while(x){
        int temp;
        temp=x%10;
        t=t*10+temp;
        x/=10;
    }
    return n==t?true:false;
  }

作者：Pedantic Moser7yR
链接：https://leetcode.cn/problems/palindrome-number/solutions/793843/hui-wen-shu-by-pedantic-moser7yr-rrua/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

而我自己写的实在太差，我第一想法就是用取模和除法操作枚举每一位数，存放到数组中再比较即可，最后写下来发现又臭又长，代码结构实在太差，还需要更多练习
写时有一些错误，比如误把x%0当作循环条件（应该是while（x）），还有就是数组的定义问题，没有用内存分配，而是用const int导致报错，还有就是数组的定义竟然写成了[0]（应该是{0}）
今天晚上就只完成了两道题，还需要再加把劲，坚持下去，努力追赶

2025-3-26
第一题
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。


题目不难，只要考虑清楚就行
但还是有些错误：1.误认为只有一种特殊情况 2.没有用swith() case语句，而是使用if elseif语句 麻烦了

第二题
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
主要考察了数组的定义，尤其是字符串数组，运用了二重数组的知识
其中for(i = 0;i < strlen(strs[0]);i++)
    {
        for(j = 1;j < strsSize;j++)
        {
            if(strs[0][i] != strs[j][i])
            {
            strs[0][i] = '\0';
            break;
            }
        }
    }
    中strs[0][i] = '\0';很关键，直接解决了无公共部分情况，又给了循环退出的条件
    很巧妙的一题

第三题
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。

考察了数据结构中的栈，基本思路是：
找字符串中‘）’或‘】’或‘}’，如果top-1指向的是‘（’或‘【’或‘}’则top--，让其出栈，最后如果栈空，说明两两配对，该字符串有效。

2025-3-28
第一题
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
这道题使用了递归与链表的知识，关键在于递归
学到了ListNode* list可以直接当作首元指针。

第二题
给你一个 非严格递增排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
返回 k 。

这一题运用了双指针知识，本质可以理解为两个数组

第三题
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素。元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数量。
假设 nums 中不等于 val 的元素数量为 k，要通过此题，您需要执行以下操作：
更改 nums 数组，使 nums 的前 k 个元素包含不等于 val 的元素。nums 的其余元素和 nums 的大小并不重要。
返回 k。

也是一道双指针题目

2025-3-31
给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。如果 needle 不是 haystack 的一部分，则返回  -1 。

这道题是典型的匹配数组问题，有两种方法，一种是直接for循环遍历，但是时间复杂度比较高
于是可以使用第二种方法————KMP算法，时间复杂度降低（主要是没有逐个遍历，而是通过前缀后缀的思想跳过一些非必要比较）
在 KMP 算法中，当模式串（needle）和文本串（haystack）在某个位置匹配失败时，部分匹配表（next数组） 的作用是告诉我们模式串应该跳到哪里继续尝试匹配，而不是从头重新开始。

核心思想
部分匹配表的值表示的是模式串中某个位置之前子串的最长相同前后缀的长度。
当匹配失败时，我们利用这个值来决定模式串的下一个起始位置。
换句话说：
如果当前字符匹配失败，我们可以根据 next[j - 1] 的值，将模式串的指针 j 回退到一个新位置。
这个新位置是基于之前已经匹配过的前缀信息计算出来的，而不是简单地回退到模式串的第一个字符。

