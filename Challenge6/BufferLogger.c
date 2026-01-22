/*
Problem: Memory-Safe Ring Buffer Logger (Concurrency-Aware, Lock-Free Optional)

Description:
Implement a fixed-size ring buffer that stores log messages (strings) in a preallocated memory region.
You must support:
	•	init(buffer_size_bytes)
	•	append(const char* msg)  // message length varies
	•	read_next(char* out, size_t out_cap) // reads the next complete message in FIFO order

Behavior rules:
	•	Messages are stored as: [4-byte length][payload bytes]
	•	Append fails gracefully if the message cannot fit in available space as a whole
	•	No dynamic allocation after init (no malloc in append/read_next)
	•	wrap-around must be handled correctly (length prefix may split across boundary)

Bonus requirement (optional, but impressive):
	•	Add a single-producer, single-consumer mode that is thread-safe without mutex locks.

🎯 Constraints:
• buffer size: 1 KB to 10 MB
• messages: 1 to 4096 bytes each
• must avoid undefined behavior and buffer overflows
• Target: append O(1), read_next O(1) amortized

Language: C
*/