'''
Problem:Task Scheduler With Cooling (Greedy + Max Heap)

Description:
You are given a list of tasks represented by uppercase letters (e.g., “A”, “B”, …).
Each task takes 1 unit of time.
You are also given an integer cooldown n meaning: once you execute task X, you cannot execute X again for the next n time units.

Return the minimum total time needed to finish all tasks, including idle time.

Additionally:
	•	Output must be just the minimum time, not the schedule.
	•	Handle extreme skew: e.g., many identical tasks.

🎯 Constraints:
• 1 ≤ len(tasks) ≤ 200,000
• tasks[i] is A..Z
• 0 ≤ n ≤ 10^9
• Target: O(m log 26) ~ O(m), where m = len(tasks)

Language: Python
'''