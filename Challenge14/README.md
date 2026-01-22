Problem: Offline-First Notes App Sync Engine

Files:
- schema.sql
- sync_logic.md
- conflict_cases.sql
- README.md

Description:
Design a local-first notes application database using SQLite.

Each note can be:
- created
- edited
- deleted
while offline.

Later, notes sync with a remote server.

Your task:
- Design the schema
- Write SQL logic to detect conflicts
- Propose resolution strategies using timestamps + versioning

You must support:
- multi-device edits
- soft deletes
- merge detection without losing data

🎯 Constraints:
	• SQLite only (no triggers that assume server logic)
	• offline writes must always succeed
	• sync must be deterministic
	• must handle clock skew gracefully

Language: SQLite
