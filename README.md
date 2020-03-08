# Troubleshoot-Arduino-millis-overflow-problem
Easy way to troubleshoot the millis() overflow problem

If you query *if (millis() < lastTrigger)*, it becomes true with the millis overflow. However, the timer is triggered twice when it overflows.
