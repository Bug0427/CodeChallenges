/*
Problem: Deep Diff + Patch Generator for JSON (Structural Sharing)

Description:
Write a function that takes two JSON-compatible values (objects/arrays/primitives) and outputs a compact “patch” describing how to transform A into B.

Patch operations should include:
	•	set path to value
	•	delete path
	•	array operations (at minimum: set index, delete index, insert index)

Requirements:
	•	paths use a standard format (e.g., JSON Pointer-like “/a/0/name”)
	•	must preserve types (array vs object)
	•	must detect and avoid emitting redundant operations
	•	must be able to apply the patch to A to reconstruct B

You do NOT need to handle cyclical references (assume pure JSON).

🎯 Constraints:
    • input size: up to 5 MB JSON text equivalent
    • max depth: up to 2,000 nested levels
    • avoid recursion depth blowups (iterative traversal preferred)
    • Target: O(n) to O(n log n) depending on key comparisons

Language: JavaScript
*/