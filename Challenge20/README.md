Problem: Process Monitor With Signals

Files:
- procmon.c
- monitor.sh
- README.md

Description:
Create a process monitoring tool that:
- launches a child process
- periodically samples its CPU and memory usage
- logs statistics to stdout
- gracefully terminates or restarts the process based on thresholds

Requirements:
- Use fork/exec
- Use signals (SIGTERM, SIGKILL, SIGCHLD)
- Detect zombie processes
- Handle Ctrl+C cleanly

The shell script should:
- wrap the C program
- restart monitoring automatically on failure

🎯 Constraints:
	• Linux environment
	• no external monitoring tools (no top/ps calls)
	• must read from /proc directly
	• signal handling must be correct

Language: Linux / Unix C + Shell