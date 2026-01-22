Problem: Event-Driven Analytics Counter

Files:
- schema.sql
- aggregation_queries.sql
- README.md

Description:
Design a backend analytics system that tracks events like:
- page_view
- click
- purchase

You must:
- store raw events
- compute rolling metrics (last 5 min, 1 hour, 24 hours)
- avoid double-counting

Write SQL queries that produce:
- per-user metrics
- per-endpoint metrics
- time-bucketed aggregates

🎯 Constraints:
	• events are write-heavy
	• reads must be fast
	• must support time-based windows
	• no background jobs allowed

Language: SQL