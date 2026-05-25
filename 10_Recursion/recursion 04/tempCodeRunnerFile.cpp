void generate_parenthesis(string s, int open, int close, int n)
{
    //base case:
    
    if (close ==n){
        cout<<s<<endl;
        return;
    }

    //1st call is to append the open brackets to the the string.
    if (open < n) 
        generate_parenthesis(s+'(',open,close,n);

    //2nd call for the close bracket.
    if (close < open)
        generate_parenthesis(s + ')', open, close, n);
}