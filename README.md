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
