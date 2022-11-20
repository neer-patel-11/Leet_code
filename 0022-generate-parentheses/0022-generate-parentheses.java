class Solution {
    List<String> al=new ArrayList<>();
    public List<String> generateParenthesis(int n) {
        dfs("",0,0,n);
        return al;
    }
    void dfs(String s,int open,int close,int n)
    {
        if(s.length()==2*n)
            al.add(s);
        if(open<n)
            dfs(s+"(",open+1,close,n);
        if(close<open)
            dfs(s+")",open,close+1,n);   
    }
}