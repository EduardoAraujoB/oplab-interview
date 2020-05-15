import searchTweets from '../src/search-tweets';

describe('search tweets', () => {
  it('should search a tweet', async () => {
    const response = await searchTweets('example');

    expect(response.status).toBe(200);
  });

  it('should throw an error', async () => {
    const response = await searchTweets('');

    expect(response.status).toBe(400);
  });
});
