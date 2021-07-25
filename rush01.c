void    boxwrite(char c);
void    checker(int c, int l, int x, int y)
{
        if ((c == 1 && l == 1) || (c == x && l == 1))
        {
            boxwrite('A');
        }
        else if ((c ==1 && l ==y) || (c == x && l ==y))
        {
            boxwrite('C');
        }
        else if (((l ==1) || (l ==y)) && c < x)
        {
            boxwrite('B');
        }
        else if (c == 1 || c  == x)
        {
            boxwrite('B');
        }
        else
        {
            boxwrite(' ');
        }
}
void    rush(int x, int y)
{
        int    l;
        int    c;
        l = 1;
        c = 1;
        if (x == 0 || y == 0)
        {
            return ;
        }        
        while (l <= y)
        {
            while (c <= x)
            {
                checker(c, l, x, y);
                c++;
            }
            boxwrite('\n');
            l++;
            c = 1;
        }
}