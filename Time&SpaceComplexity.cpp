// ========================== Notes ============================================
// ------------------------Time Complexity--------------------------------------
// Definition:
// -> Time complexity is not the actual time taken to execute the code (actual time is machine / os & server dependent if the code is online)
// -> Measured in terms of operation
// -> Integer banana => operation; Loop chalaya => operation; etc.
// -> It is the amount of time taken as the function of input size (n). => n -  number of operations
// -> n inc, kitna time laga, kam hua to kitna time laga, etc.
// => Behaviour/function that relates n with amount of time


// EG : Linear search
// code:
// for (i = 0; i < n; i++) {
//     if (arr[i] == target) {
//         return i;
//     }
// }
// return -1;
// -> for n = 1, 1 baar loop chala => 1 operation approximately
// -> for n = 10, 10 operations in worst case
// ......................
// linear time complextiy as graph of n and time taken will be straight line (time taken is directly proportional to number of operations already)