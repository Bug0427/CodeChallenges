/*
Problem: Parse & Evaluate Arithmetic Expression (Shunting Yard + Stack)

Description:
Write a program that evaluates a mathematical expression string containing:
	•	integers (may be multi-digit)
	•	operators: +, -, *, /, %, and parentheses ( )
	•	unary minus (e.g., “-3”, “2*-5”, “(-7)”)

Rules:
	•	/ is integer division truncating toward zero (C behavior)
	•	% matches C’s modulo behavior
	•	Input may contain spaces
	•	Detect and report invalid expressions (mismatched parentheses, invalid tokens, divide by zero)

Output:
	•	If valid: print the integer result
	•	If invalid: print “ERROR”

🎯 Constraints:
• expression length: 1 to 200,000 characters
• integers fit in signed 64-bit (assume intermediate may overflow unless you guard)
• no recursion (avoid stack overflow on deep parentheses)
• Target: O(n) time, O(n) space

Language: C
*/