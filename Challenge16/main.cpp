/*
Problem : Thread-Safe LRU Cache With TTL

Description:
Implement an in-memory LRU (Least Recently Used) cache that supports:
- get(key)
- put(key, value, ttl_ms)

Features:
- Entries expire automatically after TTL
- Cache evicts least-recently-used entries when capacity is reached
- Thread-safe for concurrent readers and writers

Behavior rules:
- Accessing an item refreshes its LRU position but NOT its TTL
- Expired items must never be returned
- Cleanup of expired entries must not block normal operations

🎯 Constraints:
	• capacity: up to 1,000,000 entries
	• keys: strings
	• values: strings or small structs
	• time complexity: O(1) average per operation
	• must avoid global locks that serialize all access
    
Language: C++    
*/