questions:
1) how can you use the given betterSort() function to create your own mySOrt() function that matches the required signature?
   to use betterSort() function, that only sorts the array based on the first and last. we can create our own mysort() function to sort the whole array. to do this, we call betterSort() and tell it to sort from the start(position = 0) to the end(psoition size - 1)

   code:
   void mySort(int data[], int size){
     betterSort(data, 0, size - 1);}

   so, we are passing 0 as the first position and size -1 as the last positionto cover the whole array. that's it!! this will use the betterSort() function to sort everything.
