/*
Problem: (C++) Skyline Merge: Buildings to Contour (Sweep Line + Multiset)

Description:
You are given a list of axis-aligned buildings on a 2D plane. Each building is represented as:
(left_x, right_x, height) with left_x < right_x and height > 0.
All buildings rest on the x-axis.

Return the skyline formed by these buildings as a list of “critical points” [x, height], where:
	•	The skyline changes height at x
	•	Consecutive points must not have the same height
	•	The final point must end with height 0
	•	If multiple changes occur at the same x, they must be resolved correctly

Your output must represent the visible outline when viewing buildings from far away.

🎯 Constraints:
• 1 ≤ n ≤ 200,000
• 0 ≤ left_x < right_x ≤ 10^9, 1 ≤ height ≤ 10^9
• Target: O(n log n) time, O(n) space

Language: C++
*/