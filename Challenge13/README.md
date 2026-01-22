Problem: Fraud-Resistant Wallet Ledger

Files:
- schema.sql
- ledger_queries.sql
- README.md

Description:
You are designing a transaction ledger for a digital wallet system (think fintech, prepaid cards, or game credits).

Each transaction is immutable and recorded as a row:
- deposits
- withdrawals
- transfers between users

Your task is to write SQL queries (no application code) that:
1) Compute each user’s current balance
2) Detect invalid states (negative balance at any point in time)
3) Detect suspicious behavior:
   - rapid back-and-forth transfers
   - circular money movement
   - unusually high velocity relative to user history

You must assume transactions arrive out of order and timestamps are authoritative.

🎯 Constraints:
	• millions of rows
	• no UPDATE or DELETE of transactions (append-only)
	• balances must be reconstructible at any time
	• queries must be index-aware and scalable

    Language: SQL + Backend Logic