#Problem (Title): (Assembly - x86-64) Integer to ASCII (itoa) for Signed 64-bit

#Description:
#Write an x86-64 assembly routine:

#; int64_to_str(value, buf) -> returns length written (not counting null terminator)
#; Inputs:
#;   value in RDI (signed 64-bit)
#;   buf pointer in RSI
#; Output:
#;   RAX = number of bytes written
#; Side effects:
#;   writes the decimal ASCII representation into buf
#;   writes a null terminator at the end

#Rules:
#	•	Must handle:
#	•	0
#	•	negative numbers
#	•	INT64_MIN correctly (careful: abs(INT64_MIN) overflows in signed)
#	•	You may use a temporary scratch space on the stack
#	•	You must not call libc (no printf)
#	•	Use System V AMD64 calling convention (Linux/macOS style)

#🎯 Constraints:
#    • buffer capacity guaranteed ≥ 21 bytes (sign + 19 digits + null)
#    • must be correct for full signed 64-bit range
#     Target: O(digits) time, O(1) extra space (aside from stack scratch)

# Language: Assembly Language