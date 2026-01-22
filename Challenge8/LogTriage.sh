#Problem: Log Triage: Top Offenders + Time Window

#Description:
#You are given a web server access log file (common/combined format), potentially huge.
#Write a bash script that accepts:
#	•	a log filepath
#	•	a start timestamp and end timestamp (ISO-8601, e.g. 2026-01-21T00:00:00)
#	•	optional: status code filter (e.g., 500)

#Your script prints:
#	1.	Top 10 IPs by request count within the time window
#	2.	Top 10 URLs by request count within the time window
#	3.	If status filter is provided, perform the above only for matching status

#Requirements:
#	•	Must stream efficiently (no loading whole file into memory)
#	•	Must handle malformed lines by skipping them
#	•	Must be portable: POSIX-ish tools allowed (awk/sed/grep/sort/head), no Python/Node

#🎯 Constraints:
#• log file size: up to 50 GB
#• time window can be small or large
#• must finish in reasonable time using pipelines
#• Target: O(N log M) where M is number of unique keys (IPs/URLs)

#Language: Linux/Unix Scripting - Bash