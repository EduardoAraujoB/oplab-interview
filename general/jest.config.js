module.exports = {
  bail: 1,
  clearMocks: true,
  collectCoverage: true,
  collectCoverageFrom: ['**/src/*.ts'],
  coverageDirectory: '__tests__/coverage',
  coveragePathIgnorePatterns: ['/node_modules/', 'src/index.ts'],
  coverageReporters: ['text', 'lcov'],
  preset: 'ts-jest',
  testEnvironment: 'node',
  testMatch: ['**/__tests__/**/*.test.ts'],
};
