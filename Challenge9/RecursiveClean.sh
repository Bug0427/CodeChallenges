#Problem: Safe Recursive Cleanup (Dry-Run + Rules)

#Description:
#Create a bash script that cleans a directory tree according to a config file:
#Config rules include:
#	•	file extensions to delete (e.g., .tmp, .cache)
#	•	minimum age in days (only delete older than X days)
#	•	maximum total space to free (stop once reached)
#	•	excluded paths (never delete inside these)

#Modes:
#	•	–dry-run: prints exactly what would be deleted, totals, and why each file matched
#	•	–apply: performs deletions, logs actions to a logfile
#	•	–report: prints a summary only (counts, bytes freed, top folders by reclaimed size)

#Safety requirements:
#	•	Must not follow symlinks
#	•	Must not delete outside the specified root directory
#	•	Must handle filenames with spaces/newlines safely

#🎯 Constraints:
#   • directory can contain millions of files
#   • must be robust against weird filenames
#   • avoid unsafe patterns like rm -rf "$var" without validation
#   • Target: streaming traversal using find/xargs safely

#Language:Linux/Unix Scripting - Bash