'''
Problem: Concurrent Web Crawler With Backpressure

Description:
Build a concurrent web crawler that:
- starts from a seed URL
- crawls links within the same domain
- limits concurrency
- applies backpressure when queue grows too large

Requirements:
- Respect max_requests_per_second
- Avoid revisiting URLs
- Handle slow or failing endpoints gracefully
- Stop after crawling N pages

You may use:
- threading OR asyncio (your choice)

🎯 Constraints:
	• up to 100,000 URLs
	• network failures are common
	• must not exhaust memory
	• queue growth must be controlled
	• clean shutdown required

Language: Python
'''