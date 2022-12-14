/* Codes asked in practical exams. */

/* WAP to calculate area of a cylinder with user input in prolog */
cylinder:-
         write('Enter Radius'),
         read(R),
         write('Enter Height'),
         read(H),
         A is (2*pi*R*H)+(2*pi*R*R),
         write('Area of Cylinder is:'),
         format("~2f",[A]).

/* WAP to sum only the positive elements of a list in prolog. */
sumPositive([],0).
sumPositive([H|T],Sum) :-
    H > 0,
    sumPositive(T,Sum1),
    Sum is Sum1+H.
sumPositive([H|T],Sum) :-
    H =< 0,
    sumPositive(T,Sum).   
