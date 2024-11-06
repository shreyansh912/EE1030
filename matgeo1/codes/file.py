import matplotlib.pyplot as plt


# Coordinates of points A, B, and C
A = (1, -2, -8)
B = (5, 0, -2)
C = (11, 3, 7)

# Plot the points
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot A, B, C
ax.scatter([A[0], B[0], C[0]], [A[1], B[1], C[1]], [A[2], B[2], C[2]], color='red', label='Points A, B, C')

# Plot line passing through A and C
ax.plot([A[0], C[0]], [A[1], C[1]], [A[2], C[2]], color='blue', label='Line AC')

# Annotating points
ax.text(A[0], A[1], A[2], "A(1, -2, -8)", color='green')
ax.text(B[0], B[1], B[2], "B(5, 0, -2)", color='green')
ax.text(C[0], C[1], C[2], "C(11, 3, 7)", color='green')

# Adding labels and title
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

# Show the plot
plt.legend()

# Save the plot as a PNG file
plt.savefig('figure1.png')

# Optionally, display the plot (this can be omitted if you just want to save it)
# plt.show()
