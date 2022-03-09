# Workshop Output:
Script started on Sun 27 Feb 2022 11:59:14 PM EST
==155801== Memcheck, a memory error detector
==155801== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==155801== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==155801== Command: ws processors.txt
==155801== 
[38;5;9mBegin Testing the Program!
--------------------------[0m

Command Line:
---------------------------------------------
  1: ws
  2: processors.txt
---------------------------------------------

---------------------------------------------
                  CPU SETUP
---------------------------------------------
**EXPECTED EXCEPTION: File cannot be opened.
**EXPECTED EXCEPTION: Central Unit cannot be copy-assigned.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200
[0004] (1) IBM POWER-5
[0005] (1) Intel C2-SOLO
---------------------------------------------
---------------------------------------------
                ADD PROCESSOR
---------------------------------------------
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200
[0004] (1) IBM POWER-5
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2
---------------------------------------------
---------------------------------------------
                  ADD JOBS
---------------------------------------------
Successfully added 4 jobs to the queue.
**EXPECTED EXCEPTION: Job queue is full.
---------------------------------------------
---------------------------------------------
                   RUN CPU
---------------------------------------------
Failed to complete job Add a file
6 units available.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K processing `Subtract n numbers` [06/09 remainingUnit]
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [06/07 remainingUnit]
[0004] (1) IBM POWER-5 processing `Add two numbers` [05/06 remainingUnit]
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

**EXPECTED EXCEPTION: Job is not being handled by a unit.

CPU run #2
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600 processing `Divide 2 integers` [06/08 remainingUnit]
[0002] (3) Intel Ci9-9900K processing `Subtract n numbers` [03/09 remainingUnit]
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [05/07 remainingUnit]
[0004] (1) IBM POWER-5 processing `Add two numbers` [04/06 remainingUnit]
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2


**Confirmed (2) AMD RYZEN5-2600 processing `Divide 2 integers` [06/08 remainingUnit] in CPU

CPU run # 3
[COMPLETE] `Subtract n numbers` [00/09 remainingUnit] using (3) Intel Ci9-9900K
3 units available.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600 processing `Divide 2 integers` [04/08 remainingUnit]
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [04/07 remainingUnit]
[0004] (1) IBM POWER-5 processing `Add two numbers` [03/06 remainingUnit]
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

CPU run # 4
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600 processing `Divide 2 integers` [02/08 remainingUnit]
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [03/07 remainingUnit]
[0004] (1) IBM POWER-5 processing `Add two numbers` [02/06 remainingUnit]
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

CPU run # 5
[COMPLETE] `Divide 2 integers` [00/08 remainingUnit] using (2) AMD RYZEN5-2600
4 units available.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [02/07 remainingUnit]
[0004] (1) IBM POWER-5 processing `Add two numbers` [01/06 remainingUnit]
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

CPU run # 6
[COMPLETE] `Add two numbers` [00/06 remainingUnit] using (1) IBM POWER-5
5 units available.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200 processing `Join two strings` [01/07 remainingUnit]
[0004] (1) IBM POWER-5
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

CPU run # 7
[COMPLETE] `Join two strings` [00/07 remainingUnit] using (1) Intel PENT-PRO200
6 units available.
Central Processing Unit list
[0001] (2) AMD RYZEN5-2600
[0002] (3) Intel Ci9-9900K
[0003] (1) Intel PENT-PRO200
[0004] (1) IBM POWER-5
[0005] (1) Intel C2-SOLO
[0006] (2) AMD FX-Windsor-2

---------------------------------------------

[38;5;9m------------------------
End Testing the Program![0m
==155801== 
==155801== HEAP SUMMARY:
==155801==     in use at exit: 0 bytes in 0 blocks
==155801==   total heap usage: 62 allocs, 62 frees, 85,358 bytes allocated
==155801== 
==155801== All heap blocks were freed -- no leaks are possible
==155801== 
==155801== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

Script done on Sun 27 Feb 2022 11:59:15 PM EST
