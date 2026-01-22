/*Problem: Rate Limiter + Burst Control (Token Bucket)

Description:
Implement a rate limiter in JavaScript for an API client.
You are given events arriving over time; each event is a request that must be either:
	•	allowed immediately
	•	delayed until allowed
	•	or dropped (if queue would exceed maxQueue)

Implement a Token Bucket limiter with:
	•	capacity (max tokens)
	•	refillRate (tokens per second)
	•	maxQueue (max pending requests)
	•	mode: “delay” or “drop”

Your limiter should expose:
	•	request(fn): schedules a function that returns a Promise
	•	stats(): returns counts (allowed, delayed, dropped) and current queue size

Edge cases:
	•	bursty traffic
	•	long idle times then sudden spikes
	•	refill precision (use timestamps, not setInterval-only guesses)

🎯 Constraints:
• up to 1,000,000 requests over runtime
• must not leak memory (queue must not grow unbounded)
• avoid busy-waiting
• Target: amortized O(1) scheduling per request

Language: JavaScript
*/