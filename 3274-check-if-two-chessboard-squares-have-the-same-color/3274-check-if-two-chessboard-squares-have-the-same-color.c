bool squareIsWhite(char* s) {
    int i =  s[1] -'0';
    if (i%2==1){
        if ((s[0]-'a')%2==0){
            return false;
        }
        else{
            return true ;
        }
    }
    else{
        if ((s[0]-'a')%2==0){
            return true;
        }
        else{
            return false;
        }
    }
   
    return NULL;
}

bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
      bool s1=squareIsWhite(coordinate1);
      bool s2=squareIsWhite(coordinate2);
      if (s1==s2){
        return true ;
      }
      return false ;
}